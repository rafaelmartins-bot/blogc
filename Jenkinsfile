node {
    /* Requires the Docker Pipeline plugin to be installed */
    docker.image('alpine:latest').inside {
        stage('Setup') {
            sh 'apk add --no-cache curl'
        }
        stage('Test') {
            sh 'TRAVIS=true TARGET=distcheck curl -sSf https://yatr.rgm.io/run.sh | bash' 
        }
    }
}
